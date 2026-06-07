try:
    def f():
        try:
            res = int(8%1)
        except ValueError: return 1
        except KeyboardInterrupt: return 5
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
