try:
    
    try:
        print(5, end="")
        print(int(1//0), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except Exception: 
        print(0, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
