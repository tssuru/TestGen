try:
    def f():
        try:
            res = int(1%2)
        except KeyboardInterrupt: return 0
        except BaseException: return 6
        return res
    
    print(f())
    
except: print('error')
