void main () {
	{
		var? foo = "foo";
	}
	{
		unowned var? foo = "foo";
	}
	{
		foreach (var? foo in new string[] { "foo", "bar" }) {
		}
	}
	{
		foreach (unowned var? foo in new string[] { "foo", "bar" }) {
		}
	}
}
