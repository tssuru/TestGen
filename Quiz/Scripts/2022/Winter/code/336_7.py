try:
    
    try:
        print(4, end="")
        print(int(8/1), end="")
        print(1, end="")
    except Exception: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(8, end="")
    finally:
        print(1, end="")
    
except: print('error')
