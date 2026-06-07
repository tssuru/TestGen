try:
    
    try:
        print(1, end="")
        print(7<2, end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except Exception: 
        print(5, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
