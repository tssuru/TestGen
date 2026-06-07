try:
    
    try:
        print(4, end="")
        print(int("0"), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
