try:
    def f():
        try:
            res = int("c3")
            return 44
        except KeyboardInterrupt: return 7
        except BaseException: return 1
        return res
    
    print(f())
    
except: print('error')
