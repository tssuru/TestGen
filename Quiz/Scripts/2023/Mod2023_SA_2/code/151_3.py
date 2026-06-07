try:
    def f():
        try:
            res = int("a6")
            return 45
        except ValueError: return 2
        except BaseException: return 0
        else: return 35
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
