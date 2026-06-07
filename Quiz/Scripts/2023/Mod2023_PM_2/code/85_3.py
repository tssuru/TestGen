try:
    def f():
        try:
            res = int(4%0)
            return 44
        except TypeError: return 1
        except KeyboardInterrupt: return 5
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
