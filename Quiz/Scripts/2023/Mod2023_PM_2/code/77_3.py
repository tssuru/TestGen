try:
    def f():
        try:
            res = int(4/0.0)
        except BaseException: return 9
        except KeyboardInterrupt: return 4
        else: return 32
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
