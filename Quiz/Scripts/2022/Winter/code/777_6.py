try:
    a,b,c=0,2,7
    def h(a):
        a=1
        b+=2
        c=3
        return a+b+c
    
    a,b,c=2,4,9
    print(h(a),a,b,c)
    
except: print('error')
