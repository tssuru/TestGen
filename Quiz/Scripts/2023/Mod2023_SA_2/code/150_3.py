try:
    def f():
        try:
            res = int("d3")
        except Exception: return 4
        except TypeError: return 2
        return res
    
    print(f())
    
except: print('error')
