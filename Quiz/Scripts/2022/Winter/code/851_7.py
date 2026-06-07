try:
    
    try:
        print(8, end="")
        print(3<=4, end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except Exception: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
