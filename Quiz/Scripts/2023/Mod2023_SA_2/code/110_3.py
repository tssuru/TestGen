try:
    def f():
        try:
            res = int(1/0)
            return 43
        except TypeError: return 5
        except ValueError: return 2
        return res
    
    print(f())
    
except: print('error')
