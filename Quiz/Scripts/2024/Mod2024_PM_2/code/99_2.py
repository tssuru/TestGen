try:
    def f():
        try:
            res = 5<6
        except Exception: return 3
        except ValueError: return 9
        return res
    
    print(f())
    
except: print('error')
