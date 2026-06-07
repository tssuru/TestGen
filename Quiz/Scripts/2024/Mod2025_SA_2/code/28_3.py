try:
    def f():
        try:
            res = int("8")
            return 41
        except Exception: 
            return 3
        except TypeError: 
            return 5
        finally: return 23
        return res
    
    print(f())
except: print('error')
