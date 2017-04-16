template <class T> class List{

  public:
    typedef *T iterator;
    typedef const *T const_iterator;

    size_t size() const { return avail - end; }

		iterator begin() { return begin; }
		const_iterator begin() const { return begin; }

		iterator end() { return avail; }
		const_iterator end() const { return avail; }

  private:
    iterator begin;
    iterator avail;
    iterator end;

}
