try:
    def f():
        try:
            res = int("7")
            return 41
        except BaseException: return 3
        except ValueError: return 1
        else: return 32
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
