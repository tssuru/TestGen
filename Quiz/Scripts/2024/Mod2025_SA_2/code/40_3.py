try:
    def f():
        try:
            res = int(3//0.0)
        except Exception: 
            return 2
        except ValueError: 
            return 6
        else: return 34
        return res
    
    print(f())
except: print('error')
