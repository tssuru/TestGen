try:
    def f():
        try:
            res = int("d8")
        except ValueError: return 3
        except Exception: return 7
        return res
    
    print(f())
    
except: print('error')
