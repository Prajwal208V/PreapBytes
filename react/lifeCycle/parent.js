import {Component} from 'react';
import {Child} from './Child';
class Parent extends Component {
    constructor(props) {
        super(props);
        this.state = {
            name:['Prajwal'],
            lifecycle:true,
        }
    }
    func(){
       this.setState({name:[...this.state.name,"Aquil"]});
    }
    func2(){
        this.setState({lifecycle:false});
    }
    render(){
        return (
            <>
              <h1>Parent</h1>
              <button onClick={()=> this.func()}>toogle</button>
              <button onClick={()=> this.func2()}>childUnmount</button>
              {this.state.lifecycle && <Child stud={[this.state.name]}/>}
            </>
        )
    }
}
export default Parent;
