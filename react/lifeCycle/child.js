import { Component } from 'react';

export class Child extends Component {
    constructor(props) {
        // console.log(this.props);
        super(props);
        // console.log(this.props); 
        console.log('constructor');
        this.state = {
            name: [],
            isLoaded: false,
        }
    }
    static getDerivedStateFromProps(props, state) {
        const [name] = props.stud;
        console.log("getDerivedStateFromProps");
        if (true) {
            return { name };
        }
        return null;
    }
    componentDidMount() {
        console.log("componentDidMount");
        fetch('https://jsonplaceholder.typicode.com/users')
            .then(res => res.json())
            .then(res => {
                this.setState({ isLoaded: false });
            })
    }
    shouldComponentUpdate() {
        console.log('shouldComponentUpdate');
        return true;
    }
    getSnapshotBeforeUpdate() {
        console.log('getSnapshotBeforeUpdate');
        return null;
    }
    componentDidUpdate() {
        console.log("componentDidUpdated");
        if (!this.state.isLoaded) {
            fetch('https://jsonplaceholder.typicode.com/users')
                .then(res => res.json())
                .then(res => {
                    this.setState({ isLoaded: true });
                })
        }
    }
    componentWillUnmount() {
        console.log('componentWillUnmount');
    }

    func(ind) {
        const arr = this.state.name;
        arr.splice(ind, 1);
        this.setState({ name: arr });
    }
    render() {
        console.log('render');
        // console.log(this.state);
        return (
            <>
                <h1>Child1</h1>
                {this.state.isLoaded &&
                    <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'space-between' }}>
                        {this.state.name.map((val, ind) => {
                            return (
                                <h2 key={ind} onClick={() => this.func(ind)}>{val}</h2>
                            )
                        })}
                    </div >
                }
            </>
        )
    }
}
