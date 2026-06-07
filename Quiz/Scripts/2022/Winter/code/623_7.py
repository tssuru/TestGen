try:
    
    try:
        print(9, end="")
        print(int(4/1), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except Exception: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(3, end="")
    
except: print('error')
