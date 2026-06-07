try:
    def f():
        try:
            res = 7>=2
        except TypeError: return 3
        except Exception: return 4
        return res
    
    print(f())
    
except: print('error')
