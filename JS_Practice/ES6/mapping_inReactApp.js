
const users = [
  {
    fullName: "abm mejbha", 
    age: 55,
    phones: [{home: "32343433"}, {office : "453344"}],
  },
  {
    fullName: "abdul karim", 
    age: 54,
    phones: [{home: "56568785"}, {office : "676778755"}],
  },
]


export default function App() {
    return (
      <div>
        <h1>Nested Lists</h1>
        {users.map((user, index) => (
          <article key={index}>
                 <h3>{user.fullName}</h3>
                  <p>{user.age}</p>
            {
              user.phones.map((phone, index) => <div>
                <p>Home: {phone.home}</p>
                <p>Office: {phone.office}</p>
              </div>)
            }
          </article>
        ))}
      </div>
    );
  }
  