try:
    def f():
        try:
            res = int("b2")
            return 41
        except BaseException: return 3
        except KeyboardInterrupt: return 5
        else: return 31
        return res
    
    print(f())
    
except: print('error')
