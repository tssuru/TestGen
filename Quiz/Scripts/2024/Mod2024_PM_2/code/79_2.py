try:
    def f():
        try:
            res = int(8//0)
        except ValueError: return 9
        except Exception: return 4
        else: return 33
        return res
    
    print(f())
    
except: print('error')
