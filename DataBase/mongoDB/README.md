***use***
* command followed by the database_name for creating a database.
* This command will tell the MongoDB client to create a database by this name if there is no database exists by this name. Otherwise, this command will return the existing database that has the name.

  ```mongo
  use database_name
  ```
 
***show dbs***
* to check the list of database that is residing with MongoDB, you can use the show dbs command.
  
  ```mongo
  show dbs
  ```
  
***db.dropDatabase()***
* drop is used to delete the entire database or just the table, i.e., it destroys the objects like an existing database. In MongoDB, the dropDatabase command is implemented for a similar purpose. This also helps in deleting the connected data files of that database. For operating this command, you have to reside on the current database.

  ```mongo
  db.dropDatabase()
  ```
  
* This will drop the existing database in which you are residing 

***Data type***
* is used to define the type of data being used in framing the database. It is important for you to know that MongoDB stores data in BSON format. 
* In the case of MongoDB, data representation is done in JSON document format, but here the JSON is binary-encoded, which is termed as BSON. BSON is the extended version of the JSON model, which is providing additional data types, makes performance to be competent to encode and decode in diverse languages and ordered fields.

dataTypes
* Integer  is a data type that is used for storing a numerical value, i.e., integers as you can save in other programming languages. 32 bit or 64-bit integers are supported, which depends on the server.

  ```mongo
  db.TestCollection.insert({"Integer example": 62})
  ```
  
* Boolean is implemented for storing a Boolean (i.e., true or false) values.
  
  ```mongo
  db.TestCollection.insert({"Nationality Indian": true})
  ```
  
* Double is implemented for storing floating-point data in MongoDB.

  ```mongo
  db.TestCollection.insert({"double data type": 3.1415})
  ```

* Min / Max keys are implemented for comparing a value adjacent to the lowest as well as highest BSON elements.
* String is one of the most frequently implemented data type for storing the data.
  
  ```mongo
  db.TestCollection.insert({"string data type" : "This is a sample message."})
  ```
  
* Arrays are implemented for storing arrays or list type or several values under a single key.

  ```mongo
  var degrees = ["BCA", "BS", "MCA"]
  db.TestCollection.insert({" Array Example" : " Here is an example of array","Qualification" : degrees})
  ```

* Object is implemented for embedded documents.
  
  ```mongo
  var embeddedObject={"English" : 94, "ComputerSc." : 96, "Maths" : 80, "GeneralSc." : 85}
  db.TestCollection.insert({"Object data type" : "This is Object","Marks" : embeddedObject})
  ```

* Symbol is implemented to a string and is usually kept reticent for languages having specific symbol type.

* Null is implemented for storing a Null value.

  ```mongo
  db.TestCollection.insert({" EmailID ": null})
  ```

* Date is implemented for storing the current date and time as UNIX-time format.

  ```mongo
  var date=new Date()
  var date2=ISODate()
  var month=date2.getMonth()
  db.TestCollection.insert({"Date":date, "Date2":date2, "Month":month})
  ```
  
* Timestamp stores 64-bit value, in which the first 32 bits are time_t value (seconds epoch) and the other 32 bits are ordinal to operate within a given second.
* Binary data is implemented for storing binary data.
* Object ID is implemented for storing the ID of the document.
* Regular expression is implemented for storing regular expression.
* Code is implemented for storing JavaScript code for your MongoDB document.
  
  ```mongo
  var fun=()=>{
  let name="Prajwal";
  }
  db.dataType.insert({"code":fun})
  ```

***db.createCollection(collection_name, options)***
* Creation of collection can be done using db.createCollection(name, options).  But, typically you will not require building or constructing a collection of your own. MongoDB does this creation task automatically as you start to insert some documents for making a database. Here is a syntax that will tell you how to create your collection in MongoDB
* Here, db.createCollection() is the method used; "name" is a data type - string which is specifying the name of the collection to be formed. "options" is an added document type which helps in specifying the size of memory along with indexing the collection in the database. This parameter is an optional one. 


***db.collection_name.drop()***
* This will eliminate the collection from the database completely and will not leave any indexes that are connected to this drop collection. It is also to be noted that, this collection dropping method has no argument in it and will pop up with errors in case arguments are passed. All the indexes associated with the collection gets dropped once this method is executed.

  ```mongo
  db.collection_name.drop()
  ```

* example in the previous lesson where you have created a collection inside the my_project_db database. Now use this database to remove or drop the movie collection and see the changes:

***CRUD operation***
* insert operation  is one of the crucial operations in the database system. MongoDB supports the below mentioned three methods to insert document data in your database:
1. insert() The insert() method is used to insert one or multiple documents in a collection. The collection name is associated with the insert() method and the parameters. 

The syntax to insert a single document is shown below:
  
  ```mongo
  db.collection_Name.insert(JSON document)
  ```
  
In the above syntax, the document will consist of { name: "data_value" }. As it is a JSON document, these documents will consist of the data as name-value pairs, surrounded by curly braces, i.e. {}.  

example:

  ```mongo
  db.movie.insert({"name":"Avengers: Endgame"})
  db.movie.find()
  ```

![image](https://user-images.githubusercontent.com/92531202/169120964-5f3ef36f-8f83-4bb1-a7ea-c921c4b3c11b.png)

The _id which is provided by MongoDB is a 12-byte value of ObjectId which is prepared from the following values:
* a 4-byte value denoting the seconds as Unix epoch,
* a 3-byte device identifier value,
* a 2-byte processing id,
* a 3 byte counter which is a random value.

It is also possible for you to insert multiple document values in a particular insert() method.

  ```mongo
  db.movie.insert([{ name: "Avengers: Infinity War" },{ name: "Avengers: Endgame" }])
  ```
  
* It is to be noted that the documents are supplied in the form of an array. Document values are packed or enclosed in square brackets [] and separated by commas.

![image](https://user-images.githubusercontent.com/92531202/169121587-bf14bb16-6271-47a8-abaf-a126992bb4ef.png)

* MongoDB also allow users to create document containing other documents, arrays of values, as well as arrays of documents.
 
  ```mongo
  db.writer.insert({
  writername: "Stan Lee",
  comics: [
    { comics: "DC Comics", year: 2004, name: "Superman" },
    { project: "DC Comics", year: 2001, level: "Batman" },
    { project: "Marvel Comics", year: 1968, level: "Captain America" }
  ]
  })
  ```

![image](https://user-images.githubusercontent.com/92531202/169121919-6f23ca02-1233-4fbc-acd0-b4534a12e832.png)

2. insertOne() Another way to insert documents is by using the insertOne() method for a single document in a collection:

  ```mongo
  db.movie.insertOne({ _id: 2, writername: "Stan Lee", name: "Aquaman" })
  ```

* In this case, you have a particular non-existent collection of data. In the case of the insert() method, a precise collection will get produced in case it does not exist previously.
* Here you will observe that the output appeared to be different in format than that of insert() method:

![image](https://user-images.githubusercontent.com/92531202/169122533-de588a8d-8a18-4bb4-a096-f929fd25565a.png)


3. insertMany() As the name is explaining its working, is used for inserting multiple documents:

  ```mongo
  db.developers.insertMany([{ _id: 20, devname: "John Wick", tools: "Visual Studio", born: 1948 },{ _id: 21, devname: "Ganesh Roy", tools: "Net Beans", born: 1945 },
  { _id: 22, devname: "Deeksha Raul", tools: "Unity 3D", born: 1954 }
  ]
  )
  ```
  
![image](https://user-images.githubusercontent.com/92531202/169122813-57a2b629-5e8f-4d7a-81ab-bc1a16978c75.png)

***Queries***

* Queries are another essential element of a database system. When your database is having all the data fed into it, and you want to retrieve the data by executing some command, MongoDB allows you to do that.
* A query in a database system is a command that is used for extracting data from a database and display it in a readable form. Every query associated with the database system is associated with any particular language (such as SQL for structured data, MongoDB for unstructured data). 

example: 

Let us assume a situation where your database has an employee table, and you wish to track the sales performance ID, so you have to write a query to ask your database to fetch for you the list of all the sales performance with the highest sales data in the top. This is where the queries of a database language become useful.

***methods for performing queries in mongo***

1. The find() method: This method is used for querying data from a MongoDB collection.

  ```mongo
  db.collection_name.find()
  ```

2. The pretty() method: This method is used for giving a proper format to the output extracted by the query.

  ```mongo
  db.collection_name.find().pretty()
  ```
  
***filtering criteria mongoDB queries***
* It is also possible to filter your results by giving or adding some specific criteria in which you are interested to. 

  ```mongo
  db.writers.find( { author: "Gaurav Mandes" } )
  ```
1. AND operator:  MongoDB also allows you in specifying data values of the documents holding two or more specified values to be fetched from the query. Here are two examples showing the use of specifying queries using AND.

  ```mongo
  db.writers.find( { tools: "Visual Studio", born: 1948} )
  ```
  
2. OR operator: MongoDB allows users to specify either one or multiple values to be true. According to this, till one of the conditions is true, the document data will get returned.

  ```mongo
  db.musicians.find({$or: [ { instrument: "Drums" }, { born: 1945 } ] } )
  ```
  
3. in operator: is another special operator used in queries for providing a list of values in the query. When your document holds any of those provided values, it gets returned.

  ```mongo
  db.musicians.find( { "instrument": { $in: [ "Keyboards", "Bass" ] } } )
  ```

***Protection queries***

* Protection queries are a particular type of MongoDB queries where you can specify fields you want to get in the output. MongoDB allows you to perform a query for a collection by using the db.collection.find() method, where you have to mention the field that needs to be explicitly returned. This can be done by explicitly incorporating the field names in your query, and adding a 1 or 0 with them for specifying whether this needs to be returned or not. Such kinds of parameters are called projection parameter. When a projection parameter is associated with a value 1, it will show the value according to the query and hide when the projection parameter has a value 0.

without Projection:

Here is an example where the projection parameter is not used:

  ```mongo
  db.writers.find()
  ```

![image](https://user-images.githubusercontent.com/92531202/169136068-9219fcbe-6cf5-4475-9f8c-583036f9ce7f.png)

with Projection:
  
  ```mongo
  db.writers.find( { "author": "Gaurav Mandes" }, { _id:0,  author:1, title:1 } )
  ```
  
![image](https://user-images.githubusercontent.com/92531202/169137495-2ccda510-98e5-45eb-8430-345fc09a481a.png)

***limit***
* MongoDB allows you to specify the maximum number of documents to return by making use of the limit() method which will return only the number of documents you need. And as soon as you prepare a MongoDB query for the collection with the help of db.collection.find() method, you can add on the limit() method for specifying the limit.

without limit :

  ```mongo
  db.writers.find().pretty()
  ```

![image](https://user-images.githubusercontent.com/92531202/169137808-b4d15a8a-266b-4be6-a524-dc699ef88611.png)

with limit :

  ```mongo 
  db.writers.find().pretty().limit(2)
  ```
  
 ![image](https://user-images.githubusercontent.com/92531202/169137925-bf25cd54-b280-45d8-bbc5-dd6032653566.png)
 
* In the above example where the limit() method is used, you can see that only two results are seen in the form of output because we have passed the parameter in the limit() method to display only two records.
  

***skip()***
* It is also possible to skip some documents from a MongoDB database. You can perform such operations using the skip() method of MongoDB. In other words, it can be said that users have the power to manage or regulate where MongoDB begins returning the query results.

  ```mongo
  db.writers.find().pretty().skip(1)
  ```
  
![image](https://user-images.githubusercontent.com/92531202/169138138-39ad600a-61c6-463b-9260-29dee1f526fa.png)

In the above example where the skip() method is used, you can see that only two results are seen in the form of output because we have skipped the first result.


***Updating the database***

* If you have put some data in your database and want to alter the values of any particular document, you need to use the update operation. 
* The update operation in a database is used to change or update values in a document. MongoDB makes use of the update() method for updating the documents within a MongoDB collection. For updating any specific documents, a new criterion can be incorporated with the update statement, which will only update the selected documents.

* You have to put some specific condition in the form of the parameter to update the document in MongoDB. Here is a stepwise representation of how this can be performed:

1. Make use of the update() method.
2. Prefer the circumstance that you wish to implement for deciding which document needs an update in their database. 
3. Then make use of the set command for modifying the Field Name.
4. Select which Field Name you wish for modifying and go into the new value consequently.

  ```mongo
  db.musicians.update({_id: 4},{$set: { instrument: ["Vocals", "Violin", "Octapad"] } } )
  ```

characteristics of update in mongoDB
* In case your field does not subsist in the current document, the $set operator will insert a new field with the specified value, until and unless it violates the type constraint.
* MongoDB users can also make use of { multi: true } for updating multiple documents which will meet the query criteria.
* Making use of { upsert: true } for creating a new document is also possible as no document goes with the query.


***save()***
*the update() method which helps in updating the Mongo database values in any existing document; on the other hand, the save() method is used to replace a document with another document conceded in the form of a parameter.

* In other words, it can be said that the save() is a blend of both update() as well as insert(). As the save() method is used, the document that exists will get updated. Otherwise, when it does not exist, it will create one. When an _id field is not specified, MongoDB automatically creates a document with this _id containing an ObjectId value (as conducted by the insert() method).

  ```mongo
  db.musicians.save({
  "_id": 4,
  "name": "Steven Morse",
  "instrument": "Violin",
  "born": 1954
  })
  ```

![image](https://user-images.githubusercontent.com/92531202/169139415-e19e4dd2-5397-4881-a3b8-c902e2f54403.png)

***delete***
* MongoDB allows you to delete a document or documents collectively using its one of the three methods. Three methods provided by MongoDB for deleting documents are:

1. db.collection.deleteOne()
2. db.collection.remove()
3. db.collection.deleteMany()




