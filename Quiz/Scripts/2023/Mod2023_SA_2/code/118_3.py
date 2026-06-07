try:
    def f():
        try:
            res = 6>=3
        except ValueError: return 7
        except TypeError: return 2
        return res
    
    print(f())
    
except: print('error')
