try:
    def f():
        try:
            res = int(5/1)
            return 43
        except ValueError: return 0
        except Exception: return 3
        else: return 32
        return res
    
    print(f())
    
except: print('error')
