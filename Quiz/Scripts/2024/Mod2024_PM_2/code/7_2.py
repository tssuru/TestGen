try:
    def f():
        try:
            res = int("5")
        except Exception: return 8
        except BaseException: return 5
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
