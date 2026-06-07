try:
    def f():
        try:
            res = int("3")
            return 40
        except BaseException: return 0
        except KeyboardInterrupt: return 4
        else: return 30
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
