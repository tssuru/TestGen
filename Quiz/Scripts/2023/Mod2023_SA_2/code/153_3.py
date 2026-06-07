try:
    def f():
        try:
            res = int(7%0)
            return 44
        except TypeError: return 5
        except ValueError: return 1
        return res
    
    print(f())
    
except: print('error')
