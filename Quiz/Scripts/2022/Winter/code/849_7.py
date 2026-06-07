try:
    
    try:
        print(6, end="")
        print(2!=7, end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
