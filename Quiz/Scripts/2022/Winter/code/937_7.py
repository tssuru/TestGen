try:
    
    try:
        print(5, end="")
        print(9<8, end="")
        print(1, end="")
    except TypeError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
