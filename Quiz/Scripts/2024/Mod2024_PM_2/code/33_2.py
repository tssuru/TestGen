try:
    def f():
        try:
            res = int(5%2)
        except BaseException: return 1
        except KeyboardInterrupt: return 3
        else: return 31
        return res
    
    print(f())
    
except: print('error')
