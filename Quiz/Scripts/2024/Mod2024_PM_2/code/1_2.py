try:
    def f():
        try:
            res = int(8//2)
            return 43
        except TypeError: return 9
        except Exception: return 3
        return res
    
    print(f())
    
except: print('error')
