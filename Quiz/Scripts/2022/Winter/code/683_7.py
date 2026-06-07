try:
    
    try:
        print(2, end="")
        print(int("8"), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except Exception: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
