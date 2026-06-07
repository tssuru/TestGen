try:
    def f():
        try:
            res = int(7%1)
            return 44
        except Exception: return 9
        except ValueError: return 6
        else: return 30
        return res
    
    print(f())
    
except: print('error')
