try:
    def f():
        try:
            res = int(9%0)
            return 45
        except Exception: return 5
        except BaseException: return 1
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
