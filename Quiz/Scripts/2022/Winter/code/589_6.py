try:
    a,b,c=2,5,1
    def h(b):
        a=4
        b+=1
        c=5
        return a+b+c
    
    a,b,c=3,9,4
    print(h(a),a,b,c)
    
except: print('error')
