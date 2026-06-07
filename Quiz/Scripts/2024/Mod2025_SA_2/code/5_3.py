try:
    def f():
        try:
            res = int("8")
            return 40
        except TypeError: 
            return 5
        except Exception: 
            return 6
        return res
    
    print(f())
except: print('error')
