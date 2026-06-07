try:
    def f():
        try:
            res = int("3")
            return 43
        except KeyboardInterrupt: return 9
        except BaseException: return 0
        else: return 35
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
