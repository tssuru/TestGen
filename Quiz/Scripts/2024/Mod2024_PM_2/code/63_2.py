try:
    def f():
        try:
            res = int(8/0.0)
        except BaseException: return 7
        except KeyboardInterrupt: return 5
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
