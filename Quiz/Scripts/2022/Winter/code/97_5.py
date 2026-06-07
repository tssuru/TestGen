try:
    
    a,b,c=8,9,7
    def h(a,b,c=6):
        print(a,b,c,end="")
    
    h(5,2,3)
    print(a,b,c)
    
except: print('error')
