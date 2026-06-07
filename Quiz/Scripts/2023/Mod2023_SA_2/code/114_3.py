try:
    def f():
        try:
            res = 5==9
        except Exception: return 7
        except TypeError: return 6
        return res
    
    print(f())
    
except: print('error')
