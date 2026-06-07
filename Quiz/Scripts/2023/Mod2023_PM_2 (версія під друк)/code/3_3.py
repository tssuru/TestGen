try:
    def f():
        try:
            res = int("a4")
            return 45
        except BaseException: return 3
        except ValueError: return 2
        else: return 33
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
