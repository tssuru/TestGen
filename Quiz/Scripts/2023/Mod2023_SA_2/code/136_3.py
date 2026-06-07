try:
    def f():
        try:
            res = int(7//0.0)
            return 43
        except Exception: return 0
        except ValueError: return 5
        else: return 31
        return res
    
    print(f())
    
except: print('error')
