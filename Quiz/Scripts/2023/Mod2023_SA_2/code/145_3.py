try:
    def f():
        try:
            res = int(5//0.0)
            return 45
        except KeyboardInterrupt: return 9
        except BaseException: return 2
        else: return 30
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
