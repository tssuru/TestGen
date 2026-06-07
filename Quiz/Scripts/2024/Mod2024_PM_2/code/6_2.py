try:
    def f():
        try:
            res = int(6%0)
            return 44
        except BaseException: return 7
        except Exception: return 3
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
