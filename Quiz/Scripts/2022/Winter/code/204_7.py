try:
    
    try:
        print(2, end="")
        print(int(1//0), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except Exception: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
