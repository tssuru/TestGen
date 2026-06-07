try:
    def f():
        try:
            res = int("2")
            return 42
        except BaseException: 
            return 3
        except Exception: 
            return 2
        finally: return 21
        return res
    
    print(f())
except: print('error')
