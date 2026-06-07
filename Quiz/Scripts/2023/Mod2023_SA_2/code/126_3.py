try:
    def f():
        try:
            res = int(4/1)
        except KeyboardInterrupt: return 6
        except ValueError: return 1
        else: return 34
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
