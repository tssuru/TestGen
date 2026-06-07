try:
    def f():
        try:
            res = int("1")
        except KeyboardInterrupt: return 4
        except BaseException: return 7
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
