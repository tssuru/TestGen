try:
    a,b,c=5,1,7
    def h(b):
        global c
        a=1
        b*=2
        c=4
        return a+b+c
    
    a,b,c=0,2,4
    print(h(a),a,b,c)
    
except: print('error')
